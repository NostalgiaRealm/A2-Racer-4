
/* ==== FUN_005570b4 @ 005570b4 ==== 
 * signature: undefined __thiscall FUN_005570b4(void * this, undefined4 * param_1, byte param_2, byte param_3, char param_4)
 * body: 005570b4-00557114
 */

void __thiscall FUN_005570b4(void *this,undefined4 *param_1,byte param_2,byte param_3,char param_4)

{
  char *pcVar1;
  
  if ((((*(char *)((int)this + 0x28) == '\0') && ((param_2 & 0xfe) == 0)) && ((param_3 & 0xfe) == 0)
      ) && ((-1 < param_4 && (param_4 < '\x05')))) {
    pcVar1 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v+ $v $++$ v+$ v$ v++$ v$ +v" +
             (int)param_4 +
             (-(uint)(param_2 != 1) & 0xffffffd8) + (-(uint)(param_3 != 1) & 0xffffffec) + 0x3c;
  }
  else {
    pcVar1 = "$+vx";
  }
  FUN_0055b3c0(param_1,(undefined4 *)pcVar1,4);
  return;
}


