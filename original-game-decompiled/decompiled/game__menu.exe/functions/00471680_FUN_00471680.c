
/* ==== FUN_00471680 @ 00471680 ==== 
 * signature: undefined FUN_00471680(void)
 * body: 00471680-004716c8;004717e3-004717e7
 */

void FUN_00471680(void)

{
  LCID LVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  byte in_stack_00000014;
  VARIANTARG *in_stack_0000001c;
  undefined4 uStack_3c;
  undefined *puStack_38;
  code *pcStack_34;
  _union_2683 _Stack_24;
  _union_2683 _Stack_14;
  
  pcStack_34 = (code *)&stack0xfffffffc;
  _Stack_14._12_4_ = 0;
  _Stack_14._8_4_ = 0;
  _Stack_14.decVal.Hi32 = 0;
  _Stack_14._0_4_ = 0;
  _Stack_24._12_4_ = 0;
  _Stack_24._8_4_ = 0;
  _Stack_24.decVal.Hi32 = 0;
  _Stack_24._0_4_ = 0;
  puStack_38 = &UNK_00471809;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if (((in_stack_00000014 & 2) != 0) && (in_stack_0000001c != (VARIANTARG *)0x0)) {
    switch(in_stack_00000008) {
    case 0xfffffd35:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,'\x01');
      break;
    case 0xfffffd36:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,'\x01');
      break;
    default:
      break;
    case 0xfffffd38:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,'\0');
      break;
    case 0xfffffd39:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,'\0');
      break;
    case 0xfffffd3a:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,(*(byte *)(in_stack_00000004 + 0x20) & 0x10) != 0);
      break;
    case 0xfffffd3b:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,(*(byte *)(in_stack_00000004 + 0x20) & 0x10) == 0);
      break;
    case 0xfffffd3e:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ebc(in_stack_0000001c,'\x01');
      break;
    case 0xfffffd3f:
      pcStack_34 = (code *)&stack0xfffffffc;
      LVar1 = GetUserDefaultLCID();
      FUN_00404ea4(in_stack_0000001c,LVar1);
      break;
    case 0xfffffd40:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00404ea4(in_stack_0000001c,*(undefined4 *)(*(int *)(in_stack_00000004 + 0x58) + 0x18));
      break;
    case 0xfffffd41:
      if ((*(int *)(in_stack_00000004 + 0x24) == 0) || (*(char *)(in_stack_00000004 + 0x49) == '\0')
         ) {
        iVar2 = *(int *)(in_stack_00000004 + 0x58);
      }
      else {
        iVar2 = *(int *)(*(int *)(in_stack_00000004 + 0x24) + 0x58);
      }
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_0046ef70(iVar2,(VARIANTARG *)&_Stack_24.n2);
      FUN_00404a30(in_stack_0000001c,(VARIANTARG *)&_Stack_24.n2);
      break;
    case 0xfffffd42:
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_0046f038(*(LPCSTR *)(in_stack_00000004 + 8),(VARIANTARG *)&_Stack_14.n2);
      FUN_00404a30(in_stack_0000001c,(VARIANTARG *)&_Stack_14.n2);
      break;
    case 0xfffffd43:
      FUN_00404ea4(in_stack_0000001c,*(undefined4 *)(in_stack_00000004 + 0x60));
    }
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_00471810;
  puStack_38 = (undefined *)0x471808;
  FUN_00404578((VARIANTARG *)&_Stack_24.n2,&DAT_004010f4,2);
  return;
}


