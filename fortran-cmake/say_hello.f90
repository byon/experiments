module say_hello
  implicit none

  private
  public :: say

contains

  subroutine say()
    print *, "Hello from function"
  end subroutine
end module say_hello
