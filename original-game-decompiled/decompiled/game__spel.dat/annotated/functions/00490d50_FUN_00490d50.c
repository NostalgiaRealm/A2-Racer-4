
/* ==== FUN_00490d50 @ 00490d50 ==== 
 * signature: undefined __cdecl FUN_00490d50(void * param_1, void * param_2, void * param_3)
 * body: 00490d50-00490ec7
 */

/* WARNING: Removing unreachable block (ram,0x00490d7f) */

void __cdecl FUN_00490d50(void *param_1,void *param_2,void *param_3)

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
  undefined4 *puVar9;
  
  if (param_1 != param_2) {
    this = param_1;
    param_1 = (void *)((int)param_3 - (int)param_1);
    do {
      uVar8 = *(uint *)((int)param_3 + 8);
      if (this == param_3) {
        if (*(uint *)((int)this + 8) < uVar8) {
          FUN_0054b29c();
        }
        FUN_00402c30(this);
        iVar2 = *(int *)((int)this + 8) - uVar8;
        iVar6 = -1;
        if (iVar2 != -1) {
          iVar6 = iVar2;
        }
        if (iVar6 != 0) {
          puVar7 = (undefined4 *)(uVar8 + *(int *)((int)this + 4));
          FUN_005580e0(puVar7,(undefined4 *)((int)puVar7 + iVar6),iVar2 - iVar6);
          uVar8 = *(int *)((int)this + 8) - iVar6;
          uVar3 = FUN_00402a00(this,uVar8,'\0');
          if ((char)uVar3 != '\0') {
            FUN_004029e0(this,uVar8);
          }
        }
        FUN_00402c30(this);
      }
      else {
        if (uVar8 != 0) {
          puVar4 = *(undefined1 **)((int)param_3 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          if ((byte)puVar4[-1] < 0xfe) {
            iVar6 = *(int *)((int)this + 4);
            if (iVar6 != 0) {
              cVar1 = *(char *)(iVar6 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_0054b339((char *)(iVar6 + -1));
              }
              else {
                *(char *)(iVar6 + -1) = cVar1 + -1;
              }
            }
            *(undefined4 *)((int)this + 4) = 0;
            *(undefined4 *)((int)this + 8) = 0;
            *(undefined4 *)((int)this + 0xc) = 0;
            puVar4 = *(undefined1 **)((int)param_3 + 4);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0057629c;
            }
            *(undefined1 **)((int)this + 4) = puVar4;
            *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_3 + 8);
            *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_3 + 0xc);
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_00490e8a;
          }
        }
        uVar3 = FUN_00402a00(this,uVar8,'\x01');
        if ((char)uVar3 != '\0') {
          puVar7 = *(undefined4 **)((int)param_3 + 4);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&DAT_0057629c;
          }
          puVar9 = *(undefined4 **)((int)this + 4);
          for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(uint *)((int)this + 8) = uVar8;
          *(undefined1 *)(*(int *)((int)this + 4) + uVar8) = 0;
        }
      }
LAB_00490e8a:
      puVar7 = (undefined4 *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_3 + 0x10);
      iVar6 = 0x40;
      do {
        *puVar7 = *(undefined4 *)((int)param_1 + (int)puVar7);
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      this = (void *)((int)this + 0x114);
      param_1 = (void *)((int)param_1 + -0x114);
    } while (this != param_2);
  }
  return;
}


