module say_hello
  implicit none

  private
  public :: say

contains

  subroutine say()
    print *, "Hello from function say"
  end subroutine say
end module say_hello
