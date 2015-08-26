module dynamic_hello
  use ask_name
  implicit none

  private
  public :: dynamic_say_hello

  interface dynamic_say_hello
     module procedure say_hello
  end interface dynamic_say_hello

contains

  subroutine say_hello
    character(len=:), allocatable :: name
    call ask_name_from_user(name)
    print *, "A dynamic hello to ", name, "!"
  end subroutine say_hello

end module dynamic_hello
