
/* ==== FUN_004a01ec @ 004a01ec ==== 
 * signature: undefined FUN_004a01ec(void)
 * body: 004a01ec-004a0217
 */

void FUN_004a01ec(undefined4 param_1,char *param_2,char param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  char *unaff_ESI;
  char *unaff_EDI;
  uint uVar5;
  
  cVar1 = in((short)param_2);
  *unaff_EDI = cVar1;
  *param_2 = *param_2 + param_3;
  *unaff_EDI = param_3;
  *unaff_ESI = *unaff_ESI + (char)param_2;
  pcVar3 = (char *)((uint)unaff_EDI | 0x6d726f46);
  cVar1 = in((short)param_2);
  unaff_EDI[1] = cVar1;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  puVar2 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow((int)pcVar3);
  FUN_004a0304((int)pcVar3);
  iVar4 = FUN_0048c624(*(int *)(*(int *)puVar2 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar2 + 0xb4),*(int **)(pcVar3 + 0x300),(undefined4 *)"trname",
               *(int *)(iVar4 + 8));
  iVar4 = FUN_0048c22c(*(int *)(*(int *)puVar2 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar2 + 0xb4),*(int **)(pcVar3 + 0x2dc),(undefined4 *)"win_ch",
               *(int *)(iVar4 + 0x10));
  uVar5 = 2;
  iVar4 = FUN_0048c22c(*(int *)(*(int *)puVar2 + 0xc0));
  FUN_004806b0(*(int **)puVar2,0x4a02ec,*(int *)(iVar4 + 0x10),uVar5);
  TTimer_set_Interval(*(int *)(pcVar3 + 0x304),0x1194);
  TTimer_set_Enabled(*(int *)(pcVar3 + 0x304),'\x01');
  return;
}


