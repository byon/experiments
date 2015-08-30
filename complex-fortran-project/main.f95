program hello
  use hello
  use static_hello
  use dynamic_hello
  implicit none

  call say_hello()
  call static_say_hello()
  call dynamic_say_hello()
end program hello
