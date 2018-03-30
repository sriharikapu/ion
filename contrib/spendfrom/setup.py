from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for ion "coin control"',
      author='Gavin Andresen',
      author_email='gavin@ionfoundationomy.com',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
