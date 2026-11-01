
/* ==== FUN_00435d68 @ 00435d68 ==== 
 * signature: undefined4 __register FUN_00435d68(int * param_1)
 * body: 00435d68-00435ddb
 */

undefined4 FUN_00435d68(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_00435cac((int)param_1);
  if (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 8) & 0x10) == 0) {
      FUN_00434e10((int)piVar2);
    }
    (**(code **)(*piVar2 + 0x40))();
    cVar1 = FUN_00435454((int)piVar2,'\0');
    if ((cVar1 != '\0') || (cVar1 = FUN_00435924((int)piVar2,'\0'), cVar1 != '\0')) {
      FUN_00432f04(piVar2);
    }
    return 1;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    return 0;
  }
  uVar3 = FUN_00402e8c(param_1,(int)&PTR_TPersistent_vmt_000_00431df0);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  FUN_00434e10(param_1[10]);
  return 0;
}


