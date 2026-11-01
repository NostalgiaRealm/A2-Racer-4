
/* ==== FUN_00481634 @ 00481634 ==== 
 * signature: undefined4 __register FUN_00481634(undefined4 param_1)
 * body: 00481634-00481694
 */

undefined4 FUN_00481634(undefined4 param_1)

{
  bool bVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  bVar1 = FUN_00481500(CONCAT22((short)((uint)param_1 >> 0x10),800),600,0x18);
  if (!bVar1) {
    bVar1 = FUN_00481500(CONCAT22(extraout_var,800),600,0x10);
    if (!bVar1) {
      bVar1 = FUN_00481500(CONCAT22(extraout_var_00,800),600,0xf);
      if (!bVar1) {
        bVar1 = FUN_00481500(CONCAT22(extraout_var_01,800),600,0x20);
        if (!bVar1) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


