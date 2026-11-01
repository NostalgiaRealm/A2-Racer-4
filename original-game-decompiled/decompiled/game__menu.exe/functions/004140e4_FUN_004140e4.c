
/* ==== FUN_004140e4 @ 004140e4 ==== 
 * signature: int __register FUN_004140e4(int param_1, undefined4 param_2, uint param_3)
 * body: 004140e4-0041414e
 */

int FUN_004140e4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int local_c;
  char local_8 [2];
  short local_6;
  
  uVar2 = FUN_00414ec4(param_1,param_2,param_3);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x02') {
    FUN_00413720(param_1,(undefined4 *)local_8,1);
    local_c = (int)local_8[0];
  }
  else if (cVar1 == '\x03') {
    FUN_00413720(param_1,(undefined4 *)&local_6,2);
    local_c = (int)local_6;
  }
  else if (cVar1 == '\x04') {
    FUN_00413720(param_1,&local_c,4);
  }
  else {
    FUN_004132b4();
  }
  return local_c;
}


