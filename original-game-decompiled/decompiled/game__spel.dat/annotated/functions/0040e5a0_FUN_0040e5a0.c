
/* ==== FUN_0040e5a0 @ 0040e5a0 ==== 
 * signature: uint __cdecl FUN_0040e5a0(int param_1, undefined4 * param_2, char param_3)
 * body: 0040e5a0-0040e876
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0040e5a0(int param_1,undefined4 *param_2,char param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  undefined1 local_49;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  DWORD local_34 [3];
  undefined4 uStack_28;
  float *local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c [3];
  
  local_49 = 0;
  if (param_3 != '\0') {
    local_34[0] = GetTickCount();
    local_34[1] = 0;
    fVar1 = (float)local_34[0] - _DAT_005d1b00;
    if (fVar1 < 5000.0 || (fVar1 == 5000.0) != 0) {
      return CONCAT22((short)(local_34[0] >> 0x10),
                      (ushort)(fVar1 < 5000.0) << 8 | (ushort)NAN(fVar1) << 10 |
                      (ushort)(fVar1 == 5000.0) << 0xe);
    }
  }
  cVar2 = '\0';
  local_44 = 0;
  iVar5 = (int)param_2 * 0x99;
  iVar6 = (int)param_2 * 0x994;
  puVar8 = param_2;
  do {
    if (9 < local_44) break;
    iVar9 = param_1 * 0xf0;
    iVar5 = *(int *)(iVar9 + 0x50 + DAT_00715e50);
    if (iVar5 == 0) {
      param_2 = *(undefined4 **)(DAT_00715f00 + 0xf4 + iVar6);
    }
    else if (iVar5 == 1) {
      param_2 = *(undefined4 **)(DAT_00715f00 + 0xf8 + iVar6);
    }
    else {
      param_2 = *(undefined4 **)(DAT_00715f00 + 0xf8 + iVar6);
    }
    local_24 = (float *)0x0;
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0;
    local_14 = 0.0;
    local_10 = 0;
    fVar10 = FUN_004a6e80((int)puVar8,1);
    local_14 = (float)fVar10;
    if ((0 < (int)param_2) && (puVar7 = (undefined4 *)0x0, 0 < (int)param_2)) {
      do {
        iVar3 = FUN_004a6d70((int)puVar8,(int)puVar7,iVar5);
        if (*(int *)(iVar3 * 0x50 + 0x24 + DAT_00715eb8) == 0) {
          iVar3 = FUN_004a6d70((int)puVar8,(int)puVar7,iVar5);
          pfVar4 = (float *)FUN_004a6d00(local_c,(int)puVar8,(int)puVar7,iVar5);
          local_24 = (float *)*pfVar4;
          local_20 = pfVar4[1];
          local_1c = pfVar4[2];
          local_40 = FUN_004af230(&DAT_00715250,(int)puVar8,*pfVar4,pfVar4[1],pfVar4[2]);
          FUN_004adaf0(&local_40,1,local_24,local_20,local_1c,(int *)local_34,&local_38,&local_3c);
          fVar10 = FUN_004ad640(DAT_00715f00 + local_40 * 0x994,(float)local_24,local_20,local_1c,
                                local_38,local_3c);
          local_20 = (float)(fVar10 + (float10)20.0);
          (**(code **)(**(int **)(iVar9 + 0x10 + DAT_00715e50) + 0x10))(&local_24,&local_18);
          *(undefined4 **)(iVar9 + 0x38 + DAT_00715e50) = puVar8;
          *(undefined4 **)(iVar9 + 0x34 + DAT_00715e50) = puVar8;
          *(int *)(iVar9 + 0x3c + DAT_00715e50) = iVar3;
          local_34[2] = GetTickCount();
          uStack_28 = 0;
          _DAT_005d1b00 = (float)local_34[2];
          cVar2 = '\x01';
          local_49 = 1;
          puVar7 = param_2;
        }
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while ((int)puVar7 < (int)param_2);
    }
    if (DAT_006fb8e8 == 0) {
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      iVar6 = iVar6 + 0x994;
    }
    else {
      puVar8 = (undefined4 *)((int)puVar8 + -1);
      iVar6 = iVar6 + -0x994;
    }
    iVar5 = CONCAT31((int3)((uint)DAT_006fb8e8 >> 8),cVar2);
    local_44 = local_44 + 1;
  } while (cVar2 == '\0');
  return CONCAT31((int3)((uint)iVar5 >> 8),local_49);
}


