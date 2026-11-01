
/* ==== FUN_0049a970 @ 0049a970 ==== 
 * signature: undefined1 * __thiscall FUN_0049a970(void * this, undefined1 * param_1)
 * body: 0049a970-0049ab9b
 */

undefined1 * __thiscall FUN_0049a970(void *this,undefined1 *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  undefined4 uStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e81b;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  local_4c[0] = param_1._0_1_;
  FUN_004028f0(local_4c,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = &DAT_0071284c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar3 = FUN_00402a00(local_4c,uVar7,'\x01');
  if ((char)uVar3 != '\0') {
    puVar9 = (undefined4 *)&DAT_0071284c;
    puVar11 = local_48;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_004029e0(local_4c,uVar7);
  }
  local_4 = 0;
  bVar1 = false;
  iVar12 = 0;
  iVar4 = FUN_0049bf00(*(int *)((int)this + 0x3c));
  if (0 < iVar4) {
    do {
      piVar5 = (int *)FUN_0049bd10(*(void **)((int)this + 0x3c),iVar12);
      if (piVar5 != (int *)0x0) {
        cVar2 = FUN_004993b0((int)piVar5);
        if (cVar2 != '\0') {
          if (bVar1) {
            iVar4 = (**(code **)(*piVar5 + 8))(local_3c);
            local_4._0_1_ = 1;
            puVar6 = FUN_004797e0(auStack_1c,&DAT_005ae53c,iVar4);
            local_4._0_1_ = 2;
            FUN_00483d90(local_4c,(int)puVar6,0,0xffffffff);
            local_4._0_1_ = 1;
            FUN_004028f0(auStack_1c,'\x01');
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_38 != 0) {
              cVar2 = *(char *)(iStack_38 + -1);
              if ((cVar2 != '\0') && (cVar2 != -1)) {
                *(char *)(iStack_38 + -1) = cVar2 + -1;
                iStack_38 = 0;
                uStack_34 = 0;
                uStack_30 = 0;
                goto LAB_0049ab25;
              }
              FUN_0054b339((char *)(iStack_38 + -1));
            }
            iStack_38 = 0;
            uStack_34 = 0;
            uStack_30 = 0;
          }
          else {
            bVar1 = true;
            iVar4 = (**(code **)(*piVar5 + 8))(local_2c);
            local_4._0_1_ = 3;
            FUN_00483d90(local_4c,iVar4,0,0xffffffff);
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_28 != 0) {
              cVar2 = *(char *)(iStack_28 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339((char *)(iStack_28 + -1));
              }
              else {
                *(char *)(iStack_28 + -1) = cVar2 + -1;
              }
            }
            iStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
          }
        }
      }
LAB_0049ab25:
      iVar12 = iVar12 + 1;
      iVar4 = FUN_0049bf00(*(int *)((int)this + 0x3c));
    } while (iVar12 < iVar4);
  }
  *param_1 = local_4c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_4c,0,0xffffffff);
  if (local_48 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_48 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_48 + -1));
    }
    else {
      *(char *)((int)local_48 + -1) = cVar2 + -1;
    }
  }
  *unaff_FS_OFFSET = uStack_c;
  return param_1;
}


