
/* ==== TControl.dyn_ffed @ 00424460 ==== 
 * signature: undefined __register TControl.dyn_ffed(int * param_1, int param_2, int param_3)
 * body: 00424460-0042459b
 * note: Name source: Delphi dynamic method table
 */

/* WARNING: Removing unreachable block (ram,0x0042453a) */
/* Name source: Delphi dynamic method table */

void TControl_dyn_ffed(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int local_18;
  int local_14;
  
  if (param_2 != param_3) {
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      bVar4 = 0x1f;
    }
    else {
      bVar4 = *(byte *)(param_1 + 0x22);
    }
    if ((bVar4 & 1) == 0) {
      iVar2 = param_1[0xc];
    }
    else {
      iVar2 = MulDiv(param_1[0xc],param_2,param_3);
    }
    if ((bVar4 & 2) == 0) {
      local_18 = param_1[0xd];
    }
    else {
      local_18 = MulDiv(param_1[0xd],param_2,param_3);
    }
    if (((bVar4 & 4) == 0) || ((*(byte *)((int)param_1 + 0x41) & 1) != 0)) {
      local_14 = param_1[0xe];
    }
    else if ((bVar4 & 1) == 0) {
      local_14 = MulDiv(param_1[0xe],param_2,param_3);
    }
    else {
      local_14 = MulDiv(param_1[0xc] + param_1[0xe],param_2,param_3);
      local_14 = local_14 - iVar2;
    }
    if (((bVar4 & 8) == 0) || ((*(byte *)((int)param_1 + 0x41) & 2) != 0)) {
      iVar3 = param_1[0xf];
    }
    else {
      iVar3 = MulDiv(param_1[0xd] + param_1[0xf],param_2,param_3);
      iVar3 = iVar3 - local_18;
    }
    (**(code **)(*param_1 + 0x7c))(param_1,iVar2,local_18,iVar3,local_14);
    if ((*(char *)((int)param_1 + 0x49) == '\0') && ((bVar4 & 0x10) != 0)) {
      piVar1 = (int *)param_1[0x16];
      iVar2 = TFont_get_Size((int)piVar1);
      iVar2 = MulDiv(iVar2,param_2,iVar3);
      TFont_set_Size(piVar1,iVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}


