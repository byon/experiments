module ask_name
  implicit none

  private
  public :: ask_name_from_user

contains

  subroutine ask_name_from_user(name)
    character(len=:), allocatable :: name
    character(len=128) :: local_name

    print *, "Give your name"
    read (*, *) local_name
    name = local_name(1:len_trim(local_name))
  end subroutine ask_name_from_user

end module ask_name
