
/* ==== FUN_00439eb4 @ 00439eb4 ==== 
 * signature: int * __register FUN_00439eb4(int * param_1)
 * body: 00439eb4-00439eda
 */

int * FUN_00439eb4(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  do {
    piVar2 = param_1;
    param_1 = (int *)piVar2[9];
  } while ((int *)piVar2[9] != (int *)0x0);
  uVar1 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_vmt_000_00438554);
  if ((char)uVar1 == '\0') {
    return (int *)0x0;
  }
  return piVar2;
}


