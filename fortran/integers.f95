program integers
  implicit none

  integer :: i = 0
  integer :: COUNT = 32
  integer, dimension(32) :: numbers = 0

  do i=0, COUNT-1
     numbers(i) = (i + 1) ** 2
  end do

  do i=0, COUNT-1
     print *, "integer value at ", i, " is ", numbers(i)
  end do

end program integers
