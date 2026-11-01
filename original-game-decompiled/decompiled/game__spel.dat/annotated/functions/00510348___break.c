
/* ==== __break @ 00510348 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00510348-00510348
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


