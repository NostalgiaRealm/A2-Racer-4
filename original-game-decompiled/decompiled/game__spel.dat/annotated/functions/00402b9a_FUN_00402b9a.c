
/* ==== FUN_00402b9a @ 00402b9a ==== 
 * signature: undefined __stdcall FUN_00402b9a(void)
 * body: 00402b9a-00402b9f
 */

void FUN_00402b9a(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uVar5 = *(uint *)(unaff_EBP + -0x14);
  uVar6 = *(uint *)(iVar2 + 8);
  if (uVar6 != 0) {
    if (uVar5 < uVar6) {
      uVar6 = uVar5;
    }
    puVar7 = *(undefined4 **)(iVar2 + 4);
    puVar8 = (undefined4 *)(*(int *)(unaff_EBP + 8) + 1);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar5 = *(uint *)(unaff_EBP + -0x14);
  }
  iVar3 = *(int *)(iVar2 + 4);
  uVar6 = *(uint *)(iVar2 + 8);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  puVar4 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined1 **)(iVar2 + 4) = puVar4 + 1;
  *puVar4 = 0;
  *(uint *)(iVar2 + 0xc) = uVar5;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  *(uint *)(iVar2 + 8) = uVar5;
  *(undefined1 *)(*(int *)(iVar2 + 4) + uVar5) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


