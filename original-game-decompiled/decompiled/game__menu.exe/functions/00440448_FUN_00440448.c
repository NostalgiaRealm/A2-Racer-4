
/* ==== FUN_00440448 @ 00440448 ==== 
 * signature: undefined4 __register FUN_00440448(int * param_1)
 * body: 00440448-004404bb
 */

undefined4 FUN_00440448(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_0044038c((int)param_1);
  if (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 8) & 0x10) == 0) {
      FUN_0043f4f0((int)piVar2);
    }
    (**(code **)(*piVar2 + 0x40))();
    cVar1 = FUN_0043fb34((int)piVar2,'\0');
    if ((cVar1 != '\0') || (cVar1 = FUN_00440004((int)piVar2,'\0'), cVar1 != '\0')) {
      FUN_0043d5e4(piVar2);
    }
    return 1;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    return 0;
  }
  uVar3 = FUN_00403114(param_1,(int)&PTR_TPersistent_vmt_000_0043c4d0);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  FUN_0043f4f0(param_1[10]);
  return 0;
}


