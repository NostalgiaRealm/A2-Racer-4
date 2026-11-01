
/* ==== xvga_rc_filename @ 10001037 ==== 
 * signature: undefined __cdecl xvga_rc_filename(int param_1, uint * param_2)
 * body: 10001037-1000103b
 * thunk to: xvga_rc_filename_impl
 */

void __cdecl xvga_rc_filename(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x1037  7  xvga_rc_filename */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10001ec0(param_2,(uint *)(DAT_10031400 + param_1 * 0x1c));
  uStack_8 = 0x10001c70;
  __chkesp();
  return;
}


