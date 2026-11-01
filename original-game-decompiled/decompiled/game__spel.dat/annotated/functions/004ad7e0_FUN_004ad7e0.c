
/* ==== FUN_004ad7e0 @ 004ad7e0 ==== 
 * signature: uint __thiscall FUN_004ad7e0(void * this, int param_1, uint param_2, void * param_3)
 * body: 004ad7e0-004ad9a6;004adab7-004adabf
 */

uint __thiscall FUN_004ad7e0(void *this,int param_1,uint param_2,void *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 3;
  uVar2 = param_2;
  switch(param_2) {
  case 0:
    uVar2 = *(uint *)((int)this + 0x10);
    if ((int)(*(int *)((int)this + 0x14) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    puVar1 = (undefined4 *)FUN_004ae2a0(DAT_00715f50,iVar3,0);
    FUN_004af780(param_3,0,puVar1);
    puVar1 = (undefined4 *)FUN_004ae2a0(DAT_00715f50,iVar3,1);
    FUN_004af780(param_3,1,puVar1);
    puVar1 = (undefined4 *)FUN_004ae2a0(DAT_00715f50,iVar3,2);
    FUN_004af780(param_3,2,puVar1);
    FUN_004af7a0(param_3,(undefined4 *)((int)this + param_1 * 0xc + 0x194));
    FUN_004af7c0(param_3,*(undefined4 *)((int)this + param_1 * 4 + 0x314));
    goto LAB_004ad99c;
  case 1:
    uVar2 = *(uint *)((int)this + 0x18);
    if ((int)(*(int *)((int)this + 0x1c) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    puVar1 = (undefined4 *)FUN_004ae1f0(DAT_00715f50,iVar3,0);
    FUN_004af780(param_3,0,puVar1);
    puVar1 = (undefined4 *)FUN_004ae1f0(DAT_00715f50,iVar3,1);
    FUN_004af780(param_3,1,puVar1);
    puVar1 = (undefined4 *)FUN_004ae1f0(DAT_00715f50,iVar3,2);
    break;
  case 2:
    uVar2 = *(uint *)((int)this + 0x28);
    if ((int)(*(int *)((int)this + 0x2c) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    puVar1 = (undefined4 *)FUN_004ae3e0(DAT_00715f50,iVar3,0);
    FUN_004af780(param_3,0,puVar1);
    puVar1 = (undefined4 *)FUN_004ae3e0(DAT_00715f50,iVar3,1);
    FUN_004af780(param_3,1,puVar1);
    puVar1 = (undefined4 *)FUN_004ae3e0(DAT_00715f50,iVar3,2);
    break;
  case 3:
    uVar2 = *(uint *)((int)this + 0x20);
    if ((int)(*(int *)((int)this + 0x24) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    puVar1 = (undefined4 *)FUN_004ae340(DAT_00715f50,iVar3,0);
    FUN_004af780(param_3,0,puVar1);
    puVar1 = (undefined4 *)FUN_004ae340(DAT_00715f50,iVar3,1);
    FUN_004af780(param_3,1,puVar1);
    puVar1 = (undefined4 *)FUN_004ae340(DAT_00715f50,iVar3,2);
    break;
  default:
switchD_004ad7fb_default:
    return uVar2 & 0xffffff00;
  }
  FUN_004af780(param_3,2,puVar1);
LAB_004ad99c:
                    /* WARNING: Could not recover jumptable at 0x004ad9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&PTR_FUN_004adad0)[param_2])();
  return uVar2;
}


