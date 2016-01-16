module say_dynamic_hello
  implicit none

  private
  public :: say_hello

contains

  subroutine say_hello()
    print *, "This is a dynamic hello"
  end subroutine say_hello
end module say_dynamic_hello
