
/* ==== FUN_0049d500 @ 0049d500 ==== 
 * signature: undefined4 * __thiscall FUN_0049d500(undefined4 * param_1, undefined4 * param_2)
 * body: 0049d500-0049d69a
 */

/* WARNING: Removing unreachable block (ram,0x0049d597) */

undefined4 * __thiscall FUN_0049d500(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ea8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 7) = param_2._0_1_;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar7 = param_1 + 0xb;
  *(undefined1 *)puVar7 = param_2._0_1_;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_005771a0;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    FUN_004093c0(param_1 + 7,param_2 + 7,0,0xffffffff);
    uVar1 = param_2[0xd];
    if (puVar7 == param_2 + 0xb) {
      if ((uint)param_1[0xd] < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30(puVar7);
      iVar2 = param_1[0xd] - uVar1;
      iVar6 = -1;
      if (iVar2 != -1) {
        iVar6 = iVar2;
      }
      if (iVar6 != 0) {
        FUN_005580e0((undefined4 *)(uVar1 + param_1[0xc]),
                     (undefined4 *)((int)(uVar1 + param_1[0xc]) + iVar6),iVar2 - iVar6);
        iVar2 = param_1[0xd];
        uVar3 = FUN_00402a00(puVar7,iVar2 - iVar6,'\0');
        if ((char)uVar3 != '\0') {
          FUN_004029e0(puVar7,iVar2 - iVar6);
        }
      }
      FUN_0040f800(puVar7,0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar4 = (undefined1 *)param_2[0xc];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          FUN_004028f0(puVar7,'\x01');
          puVar4 = (undefined1 *)param_2[0xc];
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          param_1[0xc] = puVar4;
          param_1[0xd] = param_2[0xd];
          param_1[0xe] = param_2[0xe];
          puVar4[-1] = puVar4[-1] + '\x01';
          ExceptionList = local_c;
          return local_c;
        }
      }
      uVar3 = FUN_00402a00(puVar7,uVar1,'\x01');
      if ((char)uVar3 != '\0') {
        puVar7 = (undefined4 *)param_2[0xc];
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0057629c;
        }
        puVar8 = (undefined4 *)param_1[0xc];
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        param_1[0xd] = uVar1;
        *(undefined1 *)(param_1[0xc] + uVar1) = 0;
      }
    }
  }
  ExceptionList = local_c;
  return local_c;
}


