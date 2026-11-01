
/* ==== FUN_0054e333 @ 0054e333 ==== 
 * signature: void * __thiscall FUN_0054e333(void * this, uint param_1, char param_2)
 * body: 0054e333-0054e378
 */

void * __thiscall FUN_0054e333(void *this,uint param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0xffffffff) {
    FUN_0054b1b4();
  }
  uVar1 = FUN_00402a00(this,param_1,'\x01');
  if ((char)uVar1 != '\0') {
    _memset(*(void **)((int)this + 4),(int)param_2,param_1);
    *(uint *)((int)this + 8) = param_1;
    *(undefined1 *)(*(int *)((int)this + 4) + param_1) = 0;
  }
  return this;
}


