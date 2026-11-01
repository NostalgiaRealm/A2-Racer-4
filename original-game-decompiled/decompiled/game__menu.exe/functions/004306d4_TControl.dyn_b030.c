
/* ==== TControl.dyn_b030 @ 004306d4 ==== 
 * signature: undefined __register TControl.dyn_b030(int param_1, int param_2)
 * body: 004306d4-004306fd
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b030(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,*(int *)(param_2 + 8) + 0x38);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


