
/* ==== FUN_004d0310 @ 004d0310 ==== 
 * signature: uint __thiscall FUN_004d0310(void * this, uint param_1)
 * body: 004d0310-004d04a5
 */

uint __thiscall FUN_004d0310(void *this,uint param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  
  uVar5 = **(uint **)((int)this + 0x1c);
  if (((uVar5 != 0) && (**(uint **)((int)this + 0xc) < uVar5)) &&
     ((param_1 == 0xffffffff || (*(byte *)(uVar5 - 1) == param_1)))) {
    **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + 1;
    **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + -1;
    return -(uint)(param_1 != 0xffffffff) & param_1;
  }
  if ((*(int **)((int)this + 0x50) != (int *)0x0) && (param_1 != 0xffffffff)) {
    if (*(int *)((int)this + 0x38) == 0) {
      uVar5 = FUN_0055a45a(param_1 & 0xff,*(int **)((int)this + 0x50));
      if (uVar5 != 0xffffffff) {
        return param_1;
      }
    }
    else {
      pvVar2 = *(void **)((int)this + 0x44);
      uVar5 = *(uint *)((int)pvVar2 + 8);
      if (uVar5 != 0) {
        if (((*(int *)((int)pvVar2 + 4) != 0) &&
            (cVar1 = *(char *)(*(int *)((int)pvVar2 + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
          FUN_00402a00(pvVar2,uVar5,'\0');
        }
        if (*(int *)((int)pvVar2 + 4) != 0) {
          *(undefined1 *)(*(int *)((int)pvVar2 + 4) + -1) = 0xff;
        }
        piVar3 = *(int **)((int)this + 0x50);
        pbVar9 = (byte *)(*(int *)((int)pvVar2 + 4) + uVar5);
        bVar12 = uVar5 == 0;
        if (!bVar12) {
          do {
            pbVar9 = pbVar9 + -1;
            uVar6 = FUN_0055a45a((uint)*pbVar9,piVar3);
            if (uVar6 == 0xffffffff) break;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          bVar12 = uVar5 == 0;
        }
        if (bVar12) {
          pvVar2 = *(void **)((int)this + 0x44);
          pcVar4 = *(char **)((int)pvVar2 + 4);
          if (((pcVar4 != (char *)0x0) && (pcVar4[-1] != '\0')) && (pcVar4[-1] != -1)) {
            FUN_004028f0(pvVar2,'\x01');
            uVar5 = 0xffffffff;
            pcVar11 = pcVar4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            FUN_00402940(pvVar2,(undefined4 *)pcVar4,~uVar5 - 1);
          }
          iVar10 = *(int *)((int)pvVar2 + 8);
          iVar8 = -1;
          if (iVar10 != -1) {
            iVar8 = iVar10;
          }
          if (iVar8 != 0) {
            FUN_005580e0(*(undefined4 **)((int)pvVar2 + 4),
                         (undefined4 *)((int)*(undefined4 **)((int)pvVar2 + 4) + iVar8),
                         iVar10 - iVar8);
            uVar5 = *(int *)((int)pvVar2 + 8) - iVar8;
            uVar7 = FUN_00402a00(pvVar2,uVar5,'\0');
            if ((char)uVar7 != '\0') {
              *(uint *)((int)pvVar2 + 8) = uVar5;
              *(undefined1 *)(uVar5 + *(int *)((int)pvVar2 + 4)) = 0;
            }
          }
          *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
          return param_1;
        }
        if (uVar5 == 0) {
          iVar10 = 1;
          do {
            FUN_0055a2ba(piVar3);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
    }
  }
  return 0xffffffff;
}


