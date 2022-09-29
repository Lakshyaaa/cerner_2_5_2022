#"cerner_2^5_2022"  "cerner_2tothe5th_2022"

# Sum of two number using nested function.

Outer_func <- function(x) {
  Inner_func <- function(y) {
    a <- x + y
    return(a)
  }
  return (Inner_func)
}
output <- Outer_func(50) # To call the Outer_func
output(500)
