
/* ==== FUN_0049ade8 @ 0049ade8 ==== 
 * signature: undefined FUN_0049ade8(void)
 * body: 0049ade8-0049adfe
 */

void FUN_0049ade8(int param_1,undefined2 param_2)

{
  ushort *puVar1;
  short sVar2;
  undefined1 uVar3;
  int unaff_EBP;
  int *piVar4;
  
  puVar1 = (ushort *)(param_1 + 0x5f);
  sVar2 = ((ushort)unaff_EBP & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  uVar3 = in(param_2);
  piVar4 = (int *)CONCAT31((int3)((uint)param_1 >> 8),uVar3);
  (**(code **)(*piVar4 + 0xe8))(piVar4,&PTR_TWinControl_vmt_000_0049b288);
  return;
}


