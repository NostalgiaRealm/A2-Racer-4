
/* ==== FUN_0044e830 @ 0044e830 ==== 
 * signature: undefined __stdcall FUN_0044e830(void)
 * body: 0044e830-0044e963
 */

void FUN_0044e830(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  FUN_0044e790();
  if (0 < DAT_006fbad0) {
    DVar1 = GetTickCount();
    if (99 < (int)(DVar1 - DAT_006fba38)) {
      iVar2 = DAT_00715e50 + DAT_006fba58 * 0xf0;
      local_18 = *(float *)(iVar2 + 0xbc);
      local_14 = *(undefined4 *)(iVar2 + 0xc0);
      local_10 = *(undefined4 *)(iVar2 + 0xc4);
      DAT_006fba38 = DVar1;
      puVar3 = (undefined4 *)
               FUN_004b42a0(&local_24,&local_18,DAT_0073b0d0 + *(int *)(iVar2 + 0x24) * 0xa9 + 0x10)
      ;
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      iVar2 = *(int *)(DAT_006fba58 * 0xf0 + 0x10 + DAT_00715e50);
      if (iVar2 != 0) {
        pfVar4 = (float *)FUN_004a1dd0(*(void **)(iVar2 + 0x3c),local_c);
        local_24 = *pfVar4;
        local_20 = pfVar4[1];
        local_1c = pfVar4[2];
        puVar3 = (undefined4 *)FUN_004a1dd0(*(void **)(iVar2 + 0x40),local_c);
        FUN_00446bf0(local_24,local_20,local_1c,*puVar3,puVar3[1],puVar3[2],uVar5,uVar6,uVar7);
      }
    }
  }
  return;
}


