
/* ==== FUN_0048a804 @ 0048a804 ==== 
 * signature: undefined FUN_0048a804(void)
 * body: 0048a804-0048a8ca
 */

void FUN_0048a804(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_14c;
  undefined *puStackY_148;
  undefined1 *puStackY_144;
  char *pcVar3;
  undefined4 uStack_12c;
  undefined *puStack_128;
  undefined1 *puStack_124;
  byte abStack_11c [256];
  int iStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  undefined1 uStack_10;
  int *piStack_c;
  undefined4 *puStack_8;
  
  iStack_18 = 0;
  iStack_1c = 0;
  puStack_124 = (undefined1 *)0x48a823;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_128 = &UNK_0048a8ff;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puStack_14 = puStack_8;
  uStack_10 = 0xb;
  puStack_124 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,abStack_11c);
  FUN_00403e80(&iStack_1c,abStack_11c);
  pcVar3 = "LoadFromFile";
  puStackY_144 = (undefined1 *)0x48a876;
  FUN_00403f9c(&iStack_18,3);
  puStackY_144 = (undefined1 *)iStack_18;
  puStackY_148 = (undefined *)0x48a87f;
  uVar2 = FUN_0045f46c();
  puVar1 = puStackY_144;
  puStackY_144 = (undefined1 *)0x48a88b;
  FUN_0045fa3c(uVar2,(int)puVar1,0,(int)pcVar3);
  puStackY_144 = (undefined1 *)0x48a89a;
  piStack_c = FUN_00457d38((int *)&PTR_TSafeIniFile_vmt_000_0046004c,'\x01',puStack_8);
  puStackY_148 = &UNK_0048a8cb;
  uStackY_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_14c;
  puStackY_144 = &stack0xfffffffc;
  FUN_0048a300(param_1,piStack_c);
  *in_FS_OFFSET = uStackY_14c;
  puStackY_144 = &UNK_0048a8d2;
  puStackY_148 = (undefined *)0x48a8ca;
  FUN_00402f9c(piStack_c);
  return;
}


