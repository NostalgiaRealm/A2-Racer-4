
/* ==== FUN_00490ed0 @ 00490ed0 ==== 
 * signature: void * __cdecl FUN_00490ed0(void * param_1, void * param_2, void * param_3)
 * body: 00490ed0-00491048
 */

/* WARNING: Removing unreachable block (ram,0x00490f0a) */

void * __cdecl FUN_00490ed0(void *param_1,void *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *this;
  void *pvVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar8 = *(uint *)((int)param_2 + -0x10c);
    pvVar9 = (void *)((int)param_2 + -0x114);
    this = (void *)((int)param_3 + -0x114);
    if (this == pvVar9) {
      if (*(uint *)((int)param_3 + -0x10c) < uVar8) {
        FUN_0054b29c();
      }
      FUN_00402c30(this);
      iVar2 = *(int *)((int)param_3 + -0x10c) - uVar8;
      iVar6 = -1;
      if (iVar2 != -1) {
        iVar6 = iVar2;
      }
      if (iVar6 != 0) {
        puVar7 = (undefined4 *)(uVar8 + *(int *)((int)param_3 + -0x110));
        FUN_005580e0(puVar7,(undefined4 *)((int)puVar7 + iVar6),iVar2 - iVar6);
        uVar8 = *(int *)((int)param_3 + -0x10c) - iVar6;
        uVar3 = FUN_00402a00(this,uVar8,'\0');
        if ((char)uVar3 != '\0') {
          FUN_004029e0(this,uVar8);
        }
      }
      FUN_00402c30(this);
    }
    else {
      if (uVar8 != 0) {
        puVar4 = *(undefined1 **)((int)param_2 + -0x110);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          iVar6 = *(int *)((int)param_3 + -0x110);
          if (iVar6 != 0) {
            cVar1 = *(char *)(iVar6 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339((char *)(iVar6 + -1));
            }
            else {
              *(char *)(iVar6 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)((int)param_3 + -0x110) = 0;
          *(undefined4 *)((int)param_3 + -0x10c) = 0;
          *(undefined4 *)((int)param_3 + -0x108) = 0;
          puVar4 = *(undefined1 **)((int)param_2 + -0x110);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)((int)param_3 + -0x110) = puVar4;
          *(undefined4 *)((int)param_3 + -0x10c) = *(undefined4 *)((int)param_2 + -0x10c);
          *(undefined4 *)((int)param_3 + -0x108) = *(undefined4 *)((int)param_2 + -0x108);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_00491015;
        }
      }
      uVar3 = FUN_00402a00(this,uVar8,'\x01');
      if ((char)uVar3 != '\0') {
        puVar7 = *(undefined4 **)((int)param_2 + -0x110);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0057629c;
        }
        puVar10 = *(undefined4 **)((int)param_3 + -0x110);
        for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(uint *)((int)param_3 + -0x10c) = uVar8;
        *(undefined1 *)(*(int *)((int)param_3 + -0x110) + uVar8) = 0;
      }
    }
LAB_00491015:
    *(undefined4 *)((int)param_3 + -0x104) = *(undefined4 *)((int)param_2 + -0x104);
    puVar7 = (undefined4 *)((int)param_3 + -0x100);
    iVar6 = 0x40;
    do {
      *puVar7 = *(undefined4 *)(((int)pvVar9 - (int)this) + (int)puVar7);
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_3 = this;
    param_2 = pvVar9;
    if (pvVar9 == param_1) {
      return this;
    }
  } while( true );
}


