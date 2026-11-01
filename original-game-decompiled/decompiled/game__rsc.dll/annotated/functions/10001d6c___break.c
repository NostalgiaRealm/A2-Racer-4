
/* ==== __break @ 10001d6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 10001d6c-10001d6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


