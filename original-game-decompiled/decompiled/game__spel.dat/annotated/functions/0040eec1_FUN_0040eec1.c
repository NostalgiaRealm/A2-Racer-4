
/* ==== FUN_0040eec1 @ 0040eec1 ==== 
 * signature: int __fastcall FUN_0040eec1(int param_1)
 * body: 0040eec1-0040eecf
 */

int __fastcall FUN_0040eec1(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_3c [48];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569935;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00416970(auStack_3c);
  iVar2 = 0;
  uStack_4 = 0;
  iVar3 = 0;
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + *(int *)(*(int *)(param_1 + 0x18) + 4)) == '\0') {
        uStack_4 = 0xffffffff;
        *(undefined1 *)(iVar3 * 0x30 + *(int *)(*(int *)(param_1 + 0x18) + 4)) = 1;
        FUN_00416ad0((int)auStack_3c);
        ExceptionList = pvStack_c;
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
      iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
    } while (iVar3 < iVar1);
  }
  auStack_3c[0] = 1;
  FUN_00410190(*(void **)(param_1 + 0x18),*(undefined4 **)((int)*(void **)(param_1 + 0x18) + 8),1,
               auStack_3c);
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
  uStack_4 = 0xffffffff;
  FUN_00416ad0((int)auStack_3c);
  ExceptionList = pvStack_c;
  return iVar1 + -1;
}


