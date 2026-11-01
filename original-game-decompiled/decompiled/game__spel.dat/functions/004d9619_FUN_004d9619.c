
/* ==== FUN_004d9619 @ 004d9619 ==== 
 * signature: undefined __thiscall FUN_004d9619(void * this)
 * body: 004d9619-004d976f
 */

void __thiscall FUN_004d9619(void *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int unaff_ESI;
  char *pcVar7;
  undefined1 in_stack_00000018;
  undefined1 in_stack_00000028;
  void *in_stack_00000048;
  undefined1 uStack00000050;
  undefined3 uStack00000051;
  undefined1 uStack00000058;
  undefined1 uStack00000060;
  undefined3 uStack00000061;
  
  _uStack00000058 = *(undefined4 *)((int)this + 0x10);
  iVar3 = *(int *)(unaff_ESI + 0xc);
  if (iVar3 < *(int *)(unaff_ESI + 8) + 4) {
    uVar2 = uStack00000058;
    do {
      if (99999 < iVar3) {
        in_stack_00000028 = uVar2;
        FUN_004028f0(&stack0x00000028,'\0');
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_00712694;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(&stack0x00000028,(undefined4 *)&DAT_00712694,~uVar6 - 1);
        _uStack00000050 = 1;
        in_stack_00000018 = uStack00000058;
        FUN_004028f0(&stack0x00000018,'\0');
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_00712694;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(&stack0x00000018,(undefined4 *)&DAT_00712694,~uVar6 - 1);
        uStack00000050 = 2;
        FUN_004028f0(&stack0x00000008,'\0');
        uVar6 = 0xffffffff;
        pcVar7 = s_Stack_overflow_005b7248;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(&stack0x00000008,(undefined4 *)s_Stack_overflow_005b7248,~uVar6 - 1);
        _uStack00000050 = CONCAT31(uStack00000051,3);
        FUN_004d6900(0xbba,&stack0x00000008,&stack0x00000018,&stack0x00000028);
        uStack00000060 = 2;
        FUN_004028f0(&stack0x00000018,'\x01');
        _uStack00000060 = CONCAT31(uStack00000061,1);
        FUN_004028f0(&stack0x00000028,'\x01');
        _uStack00000060 = 0xffffffff;
        FUN_004028f0(&stack0x00000038,'\x01');
      }
      puVar4 = (uint *)(*(int *)(unaff_ESI + 0xc) + 5000);
      *(uint **)(unaff_ESI + 0xc) = puVar4;
      piVar5 = FUN_0055a9b4(*(int **)(unaff_ESI + 4),puVar4);
      *(int **)(unaff_ESI + 4) = piVar5;
      iVar3 = *(int *)(unaff_ESI + 0xc);
    } while (iVar3 < *(int *)(unaff_ESI + 8) + 4);
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 4) + *(int *)(unaff_ESI + 8)) = _uStack00000058;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 4;
  ExceptionList = in_stack_00000048;
  return;
}


