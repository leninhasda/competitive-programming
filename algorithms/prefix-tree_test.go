package algorithms

import (
	"reflect"
	"testing"
)

func Test_contacts(t *testing.T) {
	type args struct {
		queries [][]string
	}
	tests := []struct {
		name string
		args args
		want []int32
	}{
		{
			name: "t",
			args: args{
				[][]string{
					[]string{"add", "hack"},
					[]string{"add", "hackerrank"},
					[]string{"find", "hack"},
					[]string{"find", "hac"},
					[]string{"find", "hak"},
				},
			},
			want: []int32{2, 2, 0},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := contacts(tt.args.queries); !reflect.DeepEqual(got, tt.want) {
				t.Errorf("contacts() = %v, want %v", got, tt.want)
			}
		})
	}
}
