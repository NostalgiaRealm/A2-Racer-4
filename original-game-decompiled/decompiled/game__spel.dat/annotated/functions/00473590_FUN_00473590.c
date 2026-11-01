
/* ==== FUN_00473590 @ 00473590 ==== 
 * signature: undefined4 * __thiscall FUN_00473590(undefined4 * param_1, undefined4 * param_2)
 * body: 00473590-00473706
 */

/* WARNING: Removing unreachable block (ram,0x004735e2) */

undefined4 * __thiscall FUN_00473590(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *this;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056b441;
  local_c = ExceptionList;
  this = param_1 + 1;
  ExceptionList = &local_c;
  *(undefined1 *)this = param_2._0_1_;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00576a80;
  local_4 = 0;
  uVar2 = param_2[2];
  if (this == param_2) {
    if ((uint)param_1[3] < uVar2) {
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar3 = param_1[3] - uVar2;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      FUN_005580e0((undefined4 *)(uVar2 + param_1[2]),
                   (undefined4 *)((int)(uVar2 + param_1[2]) + iVar7),iVar3 - iVar7);
      iVar3 = param_1[3];
      uVar4 = FUN_00402a00(this,iVar3 - iVar7,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(this,iVar3 - iVar7);
      }
    }
    FUN_00402c30(this);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_2[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        iVar7 = param_1[2];
        if (iVar7 != 0) {
          cVar1 = *(char *)(iVar7 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar7 + -1));
          }
          else {
            *(char *)(iVar7 + -1) = cVar1 + -1;
          }
        }
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        puVar5 = (undefined1 *)param_2[1];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        param_1[2] = puVar5;
        param_1[3] = param_2[2];
        param_1[4] = param_2[3];
        puVar5[-1] = puVar5[-1] + '\x01';
        ExceptionList = local_c;
        return local_c;
      }
    }
    uVar4 = FUN_00402a00(this,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = (undefined4 *)param_1[2];
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_004029e0(this,uVar2);
    }
  }
  ExceptionList = local_c;
  return local_c;
}


