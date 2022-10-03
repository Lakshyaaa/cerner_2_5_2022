//"cerner_2^5_2022" "cerner_2tothe5th_2022"
//Checking Data Type Using reflect.ValueOf.Kind() Function
package main
import (
	"fmt"
	"reflect"
)
func main() {
	// string type
	var1 := "hello world"
	// integer
	var2 := 10
	// float
	var3 := 1.55
	// boolean
	var4 := true
	// complex64 and complex128 is basic datatype
	var5 := complex(9, 15)

	fmt.Println()
	fmt.Println("Check Data Type Using reflect.ValueOf.Kind() Function")
	fmt.Println()
	fmt.Println("var1 = ", reflect.ValueOf(var1).Kind())
	fmt.Println("var2 = ", reflect.ValueOf(var2).Kind())
	fmt.Println("var3 = ", reflect.ValueOf(var3).Kind())
	fmt.Println("var4 = ", reflect.ValueOf(var4).Kind())
	fmt.Println("var5 = ", reflect.ValueOf(var5).Kind())

}