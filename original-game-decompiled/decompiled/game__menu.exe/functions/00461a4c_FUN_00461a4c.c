
/* ==== FUN_00461a4c @ 00461a4c ==== 
 * signature: undefined FUN_00461a4c(void)
 * body: 00461a4c-00461b66
 */

void FUN_00461a4c(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined *puStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  puStack_10 = (undefined *)0x4;
  do {
    puStack_10 = puStack_10 + -1;
  } while (puStack_10 != (undefined *)0x0);
  puStack_18 = (undefined1 *)0x461a6b;
  uStack_c = param_1;
  iStack_8 = param_2;
  FUN_00404090(param_2);
  puStack_1c = &UNK_00461b67;
  puStack_20 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  puStack_28 = (undefined *)0x461a87;
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &stack0xfffffffc;
  FUN_004619c0(&UNK_00461b80,&puStack_10);
  puStack_24 = (undefined1 *)0x461a90;
  uVar2 = FUN_004087a4(puStack_10);
  if ((char)uVar2 != '\0') {
    puStack_28 = (undefined *)0x461aa6;
    puStack_24 = &stack0xfffffffc;
    FUN_004619c0(&UNK_00461b90,&stack0xffffffec);
    puStack_24 = (undefined1 *)0x461aaf;
    uVar2 = FUN_004087a4(unaff_EBX);
    if ((char)uVar2 != '\0') {
      puStack_28 = (undefined *)0x461ac5;
      puStack_24 = &stack0xfffffffc;
      FUN_004619c0(&UNK_00461ba0,&puStack_18);
      puStack_24 = (undefined1 *)0x461ace;
      uVar2 = FUN_004087a4(puStack_18);
      if ((char)uVar2 != '\0') {
        puStack_28 = (undefined *)0x461ae0;
        puStack_24 = &stack0xfffffffc;
        FUN_004619c0(&UNK_00461bb0,&puStack_1c);
        puStack_24 = (undefined1 *)0x461ae9;
        uVar2 = FUN_004087a4(puStack_1c);
        if ((char)uVar2 != '\0') {
          puStack_28 = (undefined *)0x461afb;
          puStack_24 = &stack0xfffffffc;
          FUN_004619c0(&UNK_00461bc0,&puStack_20);
          puStack_24 = (undefined1 *)0x461b04;
          uVar2 = FUN_004087a4(puStack_20);
          if ((char)uVar2 != '\0') {
            puStack_28 = (undefined *)0x461b16;
            puStack_24 = &stack0xfffffffc;
            FUN_004619c0(&UNK_00461bd0,&puStack_24);
            puVar1 = puStack_24;
            puStack_24 = (undefined1 *)0x461b1f;
            uVar2 = FUN_004087a4(puVar1);
            if ((char)uVar2 != '\0') {
              puStack_28 = (undefined *)0x461b31;
              puStack_24 = &stack0xfffffffc;
              FUN_004619c0(&UNK_00461be0,&puStack_28);
              puStack_24 = (undefined1 *)0x461b3a;
              FUN_004087a4(puStack_28);
            }
          }
        }
      }
    }
  }
  *in_FS_OFFSET = puStack_20;
  puStack_18 = &UNK_00461b6e;
  puStack_1c = (undefined *)0x461b5e;
  FUN_00403c80((int *)&puStack_28,7);
  puStack_1c = (undefined *)0x461b66;
  FUN_00403c5c(&iStack_8);
  return;
}


