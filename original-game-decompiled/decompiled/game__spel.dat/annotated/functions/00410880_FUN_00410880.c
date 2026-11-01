
/* ==== FUN_00410880 @ 00410880 ==== 
 * signature: undefined __cdecl FUN_00410880(void * param_1, void * param_2, void * param_3)
 * body: 00410880-00410a27
 */

/* WARNING: Removing unreachable block (ram,0x004108b3) */

void __cdecl FUN_00410880(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  pvVar1 = param_3;
  if (param_1 != param_2) {
    param_3 = (void *)((int)param_3 - (int)param_1);
    do {
      uVar8 = *(uint *)((int)pvVar1 + 8);
      if (param_1 == pvVar1) {
        if (*(uint *)((int)param_1 + 8) < uVar8) {
          FUN_0054b29c();
        }
        FUN_00402c30(param_1);
        iVar2 = *(int *)((int)param_1 + 8) - uVar8;
        iVar7 = -1;
        if (iVar2 != -1) {
          iVar7 = iVar2;
        }
        if (iVar7 != 0) {
          puVar5 = (undefined4 *)(*(int *)((int)param_1 + 4) + uVar8);
          FUN_005580e0(puVar5,(undefined4 *)((int)puVar5 + iVar7),iVar2 - iVar7);
          uVar8 = *(int *)((int)param_1 + 8) - iVar7;
          uVar3 = FUN_00402a00(param_1,uVar8,'\0');
          if ((char)uVar3 != '\0') {
            FUN_004029e0(param_1,uVar8);
          }
        }
        FUN_00402c30(param_1);
      }
      else {
        if (uVar8 != 0) {
          puVar4 = *(undefined1 **)((int)pvVar1 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          if ((byte)puVar4[-1] < 0xfe) {
            FUN_004028f0(param_1,'\x01');
            puVar4 = *(undefined1 **)((int)pvVar1 + 4);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0057629c;
            }
            *(undefined1 **)((int)param_1 + 4) = puVar4;
            *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)pvVar1 + 8);
            *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)pvVar1 + 0xc);
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_0041099c;
          }
        }
        uVar3 = FUN_00402a00(param_1,uVar8,'\x01');
        if ((char)uVar3 != '\0') {
          puVar5 = *(undefined4 **)((int)pvVar1 + 4);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)&DAT_0057629c;
          }
          puVar9 = *(undefined4 **)((int)param_1 + 4);
          for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(uint *)((int)param_1 + 8) = uVar8;
          *(undefined1 *)(*(int *)((int)param_1 + 4) + uVar8) = 0;
        }
      }
LAB_0041099c:
      *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)pvVar1 + 0x10);
      *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)pvVar1 + 0x14);
      *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)((int)pvVar1 + 0x18);
      *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)pvVar1 + 0x1c);
      *(undefined4 *)((int)param_1 + 0x20) = *(undefined4 *)((int)pvVar1 + 0x20);
      *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)pvVar1 + 0x24);
      *(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)((int)pvVar1 + 0x28);
      *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)pvVar1 + 0x2c);
      *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)pvVar1 + 0x30);
      *(undefined4 *)((int)param_1 + 0x34) = *(undefined4 *)((int)pvVar1 + 0x34);
      iVar7 = 3;
      puVar5 = (undefined4 *)((int)param_1 + 0x38);
      do {
        iVar7 = iVar7 + -1;
        *puVar5 = *(undefined4 *)((int)param_3 + -4 + (int)(puVar5 + 1));
        puVar5 = puVar5 + 1;
      } while (iVar7 != 0);
      *(undefined4 *)((int)param_1 + 0x44) = *(undefined4 *)((int)pvVar1 + 0x44);
      *(undefined1 *)((int)param_1 + 0x48) = *(undefined1 *)((int)pvVar1 + 0x48);
      *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)((int)pvVar1 + 0x4c);
      param_3 = (void *)((int)param_3 + -0x54);
      *(undefined4 *)((int)param_1 + 0x50) = *(undefined4 *)((int)pvVar1 + 0x50);
      param_1 = (void *)((int)param_1 + 0x54);
    } while (param_1 != param_2);
  }
  return;
}


