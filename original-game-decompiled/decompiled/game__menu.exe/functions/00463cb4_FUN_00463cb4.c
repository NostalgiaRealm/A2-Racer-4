
/* ==== FUN_00463cb4 @ 00463cb4 ==== 
 * signature: int * __register FUN_00463cb4(int * param_1)
 * body: 00463cb4-00463d68
 */

int * FUN_00463cb4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa8))();
  piVar3 = (int *)0x0;
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_00454aa4);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_0045b71c);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_0045b71c);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*piVar3 + 0x3c))(piVar3,(char)param_1[0x4d]);
      FUN_0045727c(piVar3,*(char *)((int)param_1 + 0x135));
      FUN_00457260(piVar3,param_1[0x4e]);
    }
  }
  else {
    piVar3 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_00454aa4);
    (**(code **)(*piVar3 + 0x3c))(piVar3,(char)param_1[0x4d]);
    FUN_0045727c(piVar3,*(char *)((int)param_1 + 0x135));
    FUN_00457260(piVar3,param_1[0x4e]);
  }
  return piVar3;
}


