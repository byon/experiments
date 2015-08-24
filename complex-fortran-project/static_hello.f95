module static_hello
  use ask_name
  implicit none

  private
  public :: static_say_hello

  interface static_say_hello
     module procedure say_hello
  end interface static_say_hello

contains

  subroutine say_hello
    character(len=:), allocatable :: name
    call ask_name_from_user(name)
    print *, "Hello ", name, "!"
  end subroutine say_hello

end module static_hello
