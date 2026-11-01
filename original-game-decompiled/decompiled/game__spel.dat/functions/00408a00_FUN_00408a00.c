
/* ==== FUN_00408a00 @ 00408a00 ==== 
 * signature: undefined __cdecl FUN_00408a00(int param_1)
 * body: 00408a00-00408b4b
 */

/* WARNING: Removing unreachable block (ram,0x00408a5e) */

void __cdecl FUN_00408a00(int param_1)

{
  float *this;
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar5 = param_1 * 0x294;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar6 = *(int *)(&DAT_005cea34 + iVar5) * 0xf0;
  iVar4 = iVar1 * 0xf0;
  iVar3 = FUN_00407d20(*(int *)(iVar4 + 0x34 + DAT_00715e50),*(int *)(iVar6 + 0x34 + DAT_00715e50));
  iVar4 = FUN_00422b90(*(int *)(iVar4 + 0x34 + DAT_00715e50),*(int *)(iVar4 + 0x3c + DAT_00715e50));
  iVar6 = FUN_00422b90(*(int *)(iVar6 + 0x34 + DAT_00715e50),*(int *)(iVar6 + 0x3c + DAT_00715e50));
  if ((iVar4 == iVar6) || ((&DAT_005cea94)[iVar5] == '\x01')) {
    if ((iVar3 == 2) || ((&DAT_005cea94)[iVar5] == '\x01')) {
      this = (float *)(&DAT_005cea7c + iVar5);
      FUN_00403040(this,1);
      FUN_00402de0(this,-100.0);
      FUN_00427b90(iVar1,this);
      fVar7 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005cea00 + iVar5) =
           (float)(fVar7 + (float10)*(float *)(&DAT_005cea00 + iVar5));
      return;
    }
  }
  else if (iVar3 == 2) {
    bVar2 = FUN_004235f0(param_1);
    *(uint *)(&DAT_005cea48 + iVar5) = CONCAT31(extraout_var,bVar2);
    FUN_00407d90(param_1);
    return;
  }
  bVar2 = FUN_004235f0(param_1);
  *(uint *)(&DAT_005cea48 + iVar5) = CONCAT31(extraout_var_00,bVar2);
  FUN_00408030(param_1);
  return;
}


