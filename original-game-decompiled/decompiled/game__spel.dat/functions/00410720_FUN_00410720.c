
/* ==== FUN_00410720 @ 00410720 ==== 
 * signature: void * __cdecl FUN_00410720(void * param_1, void * param_2, void * param_3)
 * body: 00410720-0041087a
 */

/* WARNING: Removing unreachable block (ram,0x00410751) */

void * __cdecl FUN_00410720(void *param_1,void *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *this;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar7 = *(uint *)((int)param_2 + -0xc);
    pvVar9 = (void *)((int)param_2 + -0x14);
    this = (void *)((int)param_3 + -0x14);
    if (this == pvVar9) {
      if (*(uint *)((int)param_3 + -0xc) < uVar7) {
        FUN_0054b29c();
      }
      FUN_00402c30(this);
      iVar2 = *(int *)((int)param_3 + -0xc) - uVar7;
      iVar8 = -1;
      if (iVar2 != -1) {
        iVar8 = iVar2;
      }
      if (iVar8 != 0) {
        puVar6 = (undefined4 *)(uVar7 + *(int *)((int)param_3 + -0x10));
        FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
        uVar7 = *(int *)((int)param_3 + -0xc) - iVar8;
        uVar3 = FUN_00402a00(this,uVar7,'\0');
        if ((char)uVar3 != '\0') {
          FUN_004029e0(this,uVar7);
        }
      }
      FUN_00402c30(this);
    }
    else {
      if (uVar7 != 0) {
        puVar4 = *(undefined1 **)((int)param_2 + -0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          iVar8 = *(int *)((int)param_3 + -0x10);
          if (iVar8 != 0) {
            cVar1 = *(char *)(iVar8 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339((char *)(iVar8 + -1));
            }
            else {
              *(char *)(iVar8 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)((int)param_3 + -0x10) = 0;
          *(undefined4 *)((int)param_3 + -0xc) = 0;
          *(undefined4 *)((int)param_3 + -8) = 0;
          puVar4 = *(undefined1 **)((int)param_2 + -0x10);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)((int)param_3 + -0x10) = puVar4;
          *(undefined4 *)((int)param_3 + -0xc) = *(undefined4 *)((int)param_2 + -0xc);
          *(undefined4 *)((int)param_3 + -8) = *(undefined4 *)((int)param_2 + -8);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_0041085c;
        }
      }
      uVar3 = FUN_00402a00(this,uVar7,'\x01');
      if ((char)uVar3 != '\0') {
        puVar6 = *(undefined4 **)((int)param_2 + -0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0057629c;
        }
        puVar10 = *(undefined4 **)((int)param_3 + -0x10);
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(uint *)((int)param_3 + -0xc) = uVar7;
        *(undefined1 *)(*(int *)((int)param_3 + -0x10) + uVar7) = 0;
      }
    }
LAB_0041085c:
    *(undefined4 *)((int)param_3 + -4) = *(undefined4 *)((int)param_2 + -4);
    param_3 = this;
    param_2 = pvVar9;
    if (pvVar9 == param_1) {
      return this;
    }
  } while( true );
}


