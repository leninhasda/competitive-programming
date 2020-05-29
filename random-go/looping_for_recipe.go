package random

type recipe struct {
	Name        string
	Ingredients []ing
}
type ing struct {
	Name string
}

func mainSearch() {
	recipes := make([]*recipe, 0)
	recipes = append(recipes, &recipe{
		Name: "recipe 1",
		Ingredients: []ing{
			{Name: "ing1"},
			{Name: "ing4"},
			{Name: "ing9"},
		},
	})
	recipes = append(recipes, &recipe{
		Name: "recipe 2",
		Ingredients: []ing{
			{Name: "ing9"},
			{Name: "ing2"},
		},
	})
	recipes = append(recipes, &recipe{
		Name: "recipe 3",
		Ingredients: []ing{
			{Name: "ing9"},
			{Name: "ing2"},
			{Name: "ing4"},
		},
	})
	recipes = append(recipes, &recipe{
		Name: "recipe 4",
		Ingredients: []ing{
			{Name: "ing1"},
			{Name: "ing3"},
		},
	})

	searchIngredients([]string{"ing1", "ing9"}, recipes)
}

func searchIngredients(ings []string, recipes []*recipe) {
	set := make(map[string]bool)
	for _, r := range recipes {
		for _, i := range ings {
			for _, ri := range r.Ingredients {
				if i == ri.Name && set[r.Name] == false {
					set[r.Name] = true
					println(r.Name)
				}
			}
		}
	}
}
