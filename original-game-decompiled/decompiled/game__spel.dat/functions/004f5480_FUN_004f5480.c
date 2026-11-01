
/* ==== FUN_004f5480 @ 004f5480 ==== 
 * signature: undefined __thiscall FUN_004f5480(void * this, char * param_1)
 * body: 004f5480-004f54aa
 */

void __thiscall FUN_004f5480(void *this,char *param_1)

{
  char *pcVar1;
  
  if (*(LPVOID *)this != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)this);
    *(undefined4 *)this = 0;
  }
  pcVar1 = FUN_00501030(param_1);
  *(char **)this = pcVar1;
  return;
}


