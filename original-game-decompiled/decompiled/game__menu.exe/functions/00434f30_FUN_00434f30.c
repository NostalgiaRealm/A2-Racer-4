
/* ==== FUN_00434f30 @ 00434f30 ==== 
 * signature: undefined __register FUN_00434f30(int * param_1)
 * body: 00434f30-00434f72
 */

void FUN_00434f30(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_00434df8(param_1,0,CONCAT31((int3)((uint)extraout_ECX >> 8),1),'\0','\x01');
    uVar3 = extraout_ECX_00;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_00434df8(param_1,0,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1),'\0',
                                   '\0');
      uVar3 = extraout_ECX_01;
    }
    if (piVar2 != (int *)0x0) {
      TForm_set_ActiveControl(piVar1,piVar2,uVar3);
    }
  }
  return;
}


