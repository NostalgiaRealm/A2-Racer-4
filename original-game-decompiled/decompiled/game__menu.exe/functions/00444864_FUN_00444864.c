
/* ==== FUN_00444864 @ 00444864 ==== 
 * signature: int * __register FUN_00444864(int * param_1)
 * body: 00444864-0044488a
 */

int * FUN_00444864(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  do {
    piVar2 = param_1;
    param_1 = (int *)piVar2[9];
  } while ((int *)piVar2[9] != (int *)0x0);
  uVar1 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_00442cf0);
  if ((char)uVar1 == '\0') {
    return (int *)0x0;
  }
  return piVar2;
}


