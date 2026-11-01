
/* ==== FUN_00466814 @ 00466814 ==== 
 * signature: int * __register FUN_00466814(int param_1)
 * body: 00466814-0046689e
 */

int * FUN_00466814(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_00467d48(*(int *)(param_1 + 0x128),5);
  piVar3 = (int *)0x0;
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_00454aa4);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_0045b71c);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_0045b71c);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*piVar3 + 0x3c))(piVar3,(char)piVar1[0x13]);
      FUN_0045727c(piVar3,(char)piVar1[0x15]);
      FUN_00457260(piVar3,piVar1[0x14]);
    }
  }
  else {
    piVar3 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_00454aa4);
  }
  return piVar3;
}


