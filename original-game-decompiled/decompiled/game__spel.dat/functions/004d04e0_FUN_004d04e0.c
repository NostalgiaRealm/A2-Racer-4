
/* ==== FUN_004d04e0 @ 004d04e0 ==== 
 * signature: uint __fastcall FUN_004d04e0(int param_1)
 * body: 004d04e0-004d06c9
 */

uint __fastcall FUN_004d04e0(int param_1)

{
  char cVar1;
  byte *pbVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  uVar4 = **(uint **)(param_1 + 0x1c);
  if (uVar4 != 0) {
    iVar7 = **(int **)(param_1 + 0x2c);
    if (uVar4 < iVar7 + uVar4) {
      **(int **)(param_1 + 0x2c) = iVar7 + -1;
      pbVar2 = (byte *)**(int **)(param_1 + 0x1c);
      **(int **)(param_1 + 0x1c) = (int)(pbVar2 + 1);
      return (uint)*pbVar2;
    }
  }
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      pvVar3 = *(void **)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
      FUN_00402c30(pvVar3);
      iVar7 = *(int *)((int)pvVar3 + 8);
      iVar6 = -1;
      if (iVar7 != -1) {
        iVar6 = iVar7;
      }
      if (iVar6 != 0) {
        FUN_005580e0(*(undefined4 **)((int)pvVar3 + 4),
                     (undefined4 *)((int)*(undefined4 **)((int)pvVar3 + 4) + iVar6),iVar7 - iVar6);
        uVar4 = *(int *)((int)pvVar3 + 8) - iVar6;
        uVar5 = FUN_00402a00(pvVar3,uVar4,'\0');
        if ((char)uVar5 != '\0') {
          *(uint *)((int)pvVar3 + 8) = uVar4;
          *(undefined1 *)(*(int *)((int)pvVar3 + 4) + uVar4) = 0;
        }
      }
      uVar4 = FUN_0055a2ba(*(undefined4 **)(param_1 + 0x50));
      do {
        if (uVar4 == 0xffffffff) {
          return 0xffffffff;
        }
        pvVar3 = *(void **)(param_1 + 0x44);
        if (-*(int *)((int)pvVar3 + 8) - 1U < 2) {
          FUN_0054b1b4();
        }
        uVar8 = *(int *)((int)pvVar3 + 8) + 1;
        uVar5 = FUN_00402a00(pvVar3,uVar8,'\0');
        if ((char)uVar5 != '\0') {
          *(char *)(*(int *)((int)pvVar3 + 8) + *(int *)((int)pvVar3 + 4)) = (char)uVar4;
          *(uint *)((int)pvVar3 + 8) = uVar8;
          *(undefined1 *)(*(int *)((int)pvVar3 + 4) + uVar8) = 0;
        }
        pvVar3 = *(void **)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
        FUN_00471de0(pvVar3);
        if (*(int *)((int)pvVar3 + 4) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)pvVar3 + 8) + *(int *)((int)pvVar3 + 4);
        }
        pvVar3 = *(void **)(param_1 + 0x44);
        FUN_00471de0(pvVar3);
        iVar7 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                          (param_1 + 0x40,*(undefined4 *)((int)pvVar3 + 4),iVar7,auStack_4,&uStack_c
                           ,(int)&uStack_c + 1,auStack_8);
        if (iVar7 == 0) {
LAB_004d06b9:
          return uStack_c & 0xff;
        }
        if (iVar7 != 1) {
          if (iVar7 != 3) {
            return 0xffffffff;
          }
          if (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
            pvVar3 = *(void **)(param_1 + 0x44);
            if (((*(int *)((int)pvVar3 + 4) != 0) &&
                (cVar1 = *(char *)(*(int *)((int)pvVar3 + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)
               ) {
              FUN_00402a00(pvVar3,*(uint *)((int)pvVar3 + 8),'\0');
            }
            if (*(int *)((int)pvVar3 + 4) != 0) {
              *(undefined1 *)(*(int *)((int)pvVar3 + 4) + -1) = 0xff;
            }
            uStack_c = (uint)**(byte **)((int)pvVar3 + 4);
            goto LAB_004d06b9;
          }
        }
        uVar4 = FUN_0055a2ba(*(undefined4 **)(param_1 + 0x50));
      } while( true );
    }
    uVar4 = FUN_0055a2ba(*(undefined4 **)(param_1 + 0x50));
    if (uVar4 != 0xffffffff) {
      return uVar4 & 0xff;
    }
  }
  return 0xffffffff;
}


