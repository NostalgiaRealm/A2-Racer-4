
/* ==== FUN_004105d0 @ 004105d0 ==== 
 * signature: undefined __cdecl FUN_004105d0(void * param_1, void * param_2, void * param_3)
 * body: 004105d0-0041071b
 */

/* WARNING: Removing unreachable block (ram,0x004105f7) */

void __cdecl FUN_004105d0(void *param_1,void *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar7 = *(uint *)((int)param_3 + 8);
    if (param_1 == param_3) {
      if (*(uint *)((int)param_1 + 8) < uVar7) {
        FUN_0054b29c();
      }
      FUN_00402c30(param_1);
      iVar2 = *(int *)((int)param_1 + 8) - uVar7;
      iVar8 = -1;
      if (iVar2 != -1) {
        iVar8 = iVar2;
      }
      if (iVar8 != 0) {
        puVar6 = (undefined4 *)(uVar7 + *(int *)((int)param_1 + 4));
        FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
        uVar7 = *(int *)((int)param_1 + 8) - iVar8;
        uVar3 = FUN_00402a00(param_1,uVar7,'\0');
        if ((char)uVar3 != '\0') {
          FUN_004029e0(param_1,uVar7);
        }
      }
      FUN_00402c30(param_1);
    }
    else {
      if (uVar7 != 0) {
        puVar4 = *(undefined1 **)((int)param_3 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          iVar8 = *(int *)((int)param_1 + 4);
          if (iVar8 != 0) {
            cVar1 = *(char *)(iVar8 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339((char *)(iVar8 + -1));
            }
            else {
              *(char *)(iVar8 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)((int)param_1 + 4) = 0;
          *(undefined4 *)((int)param_1 + 8) = 0;
          *(undefined4 *)((int)param_1 + 0xc) = 0;
          puVar4 = *(undefined1 **)((int)param_3 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)((int)param_1 + 4) = puVar4;
          *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)param_3 + 8);
          *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)param_3 + 0xc);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_00410702;
        }
      }
      uVar3 = FUN_00402a00(param_1,uVar7,'\x01');
      if ((char)uVar3 != '\0') {
        puVar6 = *(undefined4 **)((int)param_3 + 4);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0057629c;
        }
        puVar9 = *(undefined4 **)((int)param_1 + 4);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(uint *)((int)param_1 + 8) = uVar7;
        *(undefined1 *)(*(int *)((int)param_1 + 4) + uVar7) = 0;
      }
    }
LAB_00410702:
    *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_3 + 0x10);
    param_1 = (void *)((int)param_1 + 0x14);
  } while( true );
}


