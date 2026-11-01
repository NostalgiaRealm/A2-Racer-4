
/* ==== FUN_0041e000 @ 0041e000 ==== 
 * signature: uint __register FUN_0041e000(int * param_1)
 * body: 0041e000-0041e044
 */

uint FUN_0041e000(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0xb] == 0x20000000) {
    uVar1 = FUN_0041dfd0((int)param_1);
    if ((char)uVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x20))();
      piVar4 = (int *)FUN_0041df1c(param_1);
      uVar2 = FUN_00419464(piVar4,0,iVar3 + -1);
    }
    else {
      uVar2 = 0xffffff;
    }
  }
  else {
    uVar2 = FUN_00417d54(param_1[0xb]);
  }
  return uVar2 | 0x2000000;
}


