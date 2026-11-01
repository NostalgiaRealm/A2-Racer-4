
/* ==== FUN_004ad7c9 @ 004ad7c9 ==== 
 * signature: uint __fastcall FUN_004ad7c9(int param_1, int param_2, int param_3, uint param_4, void * param_5)
 * body: 004ad7c9-004ad7cb
 */

uint __fastcall FUN_004ad7c9(int param_1,int param_2,int param_3,uint param_4,void *param_5)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  undefined4 unaff_EBX;
  int iVar5;
  int unaff_EDI;
  char in_CF;
  
  cVar4 = (char)((uint)unaff_EBX >> 8) + 'J' + in_CF;
  pcVar1 = (char *)(CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar4,(char)unaff_EBX)) +
                   -0x4bffb529);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  pcVar1 = (char *)(unaff_EDI + -0x6f6fffb6 + (param_2 + -1) * 8);
  *pcVar1 = *pcVar1 + cVar4;
  iVar5 = param_3 * 3;
  uVar3 = param_4;
  switch(param_4) {
  case 0:
    uVar3 = *(uint *)(param_1 + 0x10);
    if ((int)(*(int *)(param_1 + 0x14) - uVar3) < iVar5) goto switchD_004ad7fb_default;
    iVar5 = iVar5 + uVar3;
    puVar2 = (undefined4 *)FUN_004ae2a0(DAT_00715f50,iVar5,0);
    FUN_004af780(param_5,0,puVar2);
    puVar2 = (undefined4 *)FUN_004ae2a0(DAT_00715f50,iVar5,1);
    FUN_004af780(param_5,1,puVar2);
    puVar2 = (undefined4 *)FUN_004ae2a0(DAT_00715f50,iVar5,2);
    FUN_004af780(param_5,2,puVar2);
    FUN_004af7a0(param_5,(undefined4 *)(param_1 + 0x194 + param_3 * 0xc));
    FUN_004af7c0(param_5,*(undefined4 *)(param_1 + 0x314 + param_3 * 4));
    goto LAB_004ad99c;
  case 1:
    uVar3 = *(uint *)(param_1 + 0x18);
    if ((int)(*(int *)(param_1 + 0x1c) - uVar3) < iVar5) goto switchD_004ad7fb_default;
    iVar5 = iVar5 + uVar3;
    puVar2 = (undefined4 *)FUN_004ae1f0(DAT_00715f50,iVar5,0);
    FUN_004af780(param_5,0,puVar2);
    puVar2 = (undefined4 *)FUN_004ae1f0(DAT_00715f50,iVar5,1);
    FUN_004af780(param_5,1,puVar2);
    puVar2 = (undefined4 *)FUN_004ae1f0(DAT_00715f50,iVar5,2);
    break;
  case 2:
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((int)(*(int *)(param_1 + 0x2c) - uVar3) < iVar5) goto switchD_004ad7fb_default;
    iVar5 = iVar5 + uVar3;
    puVar2 = (undefined4 *)FUN_004ae3e0(DAT_00715f50,iVar5,0);
    FUN_004af780(param_5,0,puVar2);
    puVar2 = (undefined4 *)FUN_004ae3e0(DAT_00715f50,iVar5,1);
    FUN_004af780(param_5,1,puVar2);
    puVar2 = (undefined4 *)FUN_004ae3e0(DAT_00715f50,iVar5,2);
    break;
  case 3:
    uVar3 = *(uint *)(param_1 + 0x20);
    if ((int)(*(int *)(param_1 + 0x24) - uVar3) < iVar5) goto switchD_004ad7fb_default;
    iVar5 = iVar5 + uVar3;
    puVar2 = (undefined4 *)FUN_004ae340(DAT_00715f50,iVar5,0);
    FUN_004af780(param_5,0,puVar2);
    puVar2 = (undefined4 *)FUN_004ae340(DAT_00715f50,iVar5,1);
    FUN_004af780(param_5,1,puVar2);
    puVar2 = (undefined4 *)FUN_004ae340(DAT_00715f50,iVar5,2);
    break;
  default:
switchD_004ad7fb_default:
    return uVar3 & 0xffffff00;
  }
  FUN_004af780(param_5,2,puVar2);
LAB_004ad99c:
                    /* WARNING: Could not recover jumptable at 0x004ad9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&PTR_FUN_004adad0)[param_4])();
  return uVar3;
}


